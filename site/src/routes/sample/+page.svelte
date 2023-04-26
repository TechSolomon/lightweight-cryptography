<script>
	export let data;
	// console.log(data);
	let samples = data.props.samples;
</script>

<div class="samples">
	<ul>
		{#each samples as sample}
			<li>
				<a href={`/sample/${sample.id}`}>{sample.title}</a>
			</li>
		{/each}
	</ul>
</div>

<style>
	.samples {
		margin-top: 20px;
	}

	ul {
		list-style-type: none;
		padding: 0;
	}
	a {
		display: inline-block;
		margin-top: 10px;
		padding: 10px;
		border: 1px dotted rgba(255, 255, 255, 0.2);
	}
</style>
