<script>
	import Title from '$lib/title.svelte';
    import '../styles/global.css';
</script>

<header>
	<Title title="LWC" />
</header>

<main>
	<!-- Page Content -->
    <slot></slot>
</main>

<footer>
    <p>UAF CS 665 (Spring 2023)</p>
</footer>

<style>
    header {
        display: flex;
        justify-content: center;
    }
    main {
        max-width: 960px;
        margin: 20px auto;
    }
    footer {
        text-align: center;
    }
</style>
