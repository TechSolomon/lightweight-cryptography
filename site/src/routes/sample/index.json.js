export async function get() {
    // connect to db

    const samples = [
        { id: 1, name: 'sample 1' },
        { id: 2, name: 'sample 2' },
        { id: 3, name: 'sample 3' },
        { id: 4, name: 'sample 4' },
        { id: 5, name: 'sample 5' },
    ]

    return {
        status: 200,
        body: { samples }
    }
}
